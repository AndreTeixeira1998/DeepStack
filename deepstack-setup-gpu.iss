; Script generated by the Inno Script Studio Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!
#include "environment.iss"
#define MyAppName "DeepStack"
#define MyAppVersion "2021.01.beta"
#define MyAppPublisher "DeepQuestAI"
#define MyAppURL "https://www.deepstack.cc"
#define MyAppExeName "deepstack.exe"
#define MyAppIcon "logo.ico"

[Setup]
ChangesEnvironment=true
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{0E2C3125-3440-4622-A82A-3B1E07310EF2}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName=C:\{#MyAppName}
DisableDirPage=yes
DefaultGroupName=DeepStack
OutputBaseFilename=DeepStack-Installer-GPU.2021.01.beta
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "armenian"; MessagesFile: "compiler:Languages\Armenian.isl"
Name: "brazilianportuguese"; MessagesFile: "compiler:Languages\BrazilianPortuguese.isl"
Name: "catalan"; MessagesFile: "compiler:Languages\Catalan.isl"
Name: "corsican"; MessagesFile: "compiler:Languages\Corsican.isl"
Name: "czech"; MessagesFile: "compiler:Languages\Czech.isl"
Name: "danish"; MessagesFile: "compiler:Languages\Danish.isl"
Name: "dutch"; MessagesFile: "compiler:Languages\Dutch.isl"
Name: "finnish"; MessagesFile: "compiler:Languages\Finnish.isl"
Name: "french"; MessagesFile: "compiler:Languages\French.isl"
Name: "german"; MessagesFile: "compiler:Languages\German.isl"
Name: "hebrew"; MessagesFile: "compiler:Languages\Hebrew.isl"
Name: "icelandic"; MessagesFile: "compiler:Languages\Icelandic.isl"
Name: "italian"; MessagesFile: "compiler:Languages\Italian.isl"
Name: "japanese"; MessagesFile: "compiler:Languages\Japanese.isl"
Name: "norwegian"; MessagesFile: "compiler:Languages\Norwegian.isl"
Name: "polish"; MessagesFile: "compiler:Languages\Polish.isl"
Name: "portuguese"; MessagesFile: "compiler:Languages\Portuguese.isl"
Name: "russian"; MessagesFile: "compiler:Languages\Russian.isl"
Name: "slovak"; MessagesFile: "compiler:Languages\Slovak.isl"
Name: "slovenian"; MessagesFile: "compiler:Languages\Slovenian.isl"
Name: "spanish"; MessagesFile: "compiler:Languages\Spanish.isl"
Name: "turkish"; MessagesFile: "compiler:Languages\Turkish.isl"
Name: "ukrainian"; MessagesFile: "compiler:Languages\Ukrainian.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked
Name: "quicklaunchicon"; Description: "{cm:CreateQuickLaunchIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked; OnlyBelowVersion: 0,6.1

[Files]
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\server\deepstack.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\*"; DestDir: "{app}";
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\deepstack\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\interpreter\*"; DestDir: "{app}\interpreter"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\redis\*"; DestDir: "{app}\redis"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\server\*"; DestDir: "{app}\server"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\platform\platform.windows.gpu.json"; DestDir: "{app}\server\platform.json"; Flags: ignoreversion
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\server\version.txt"; DestDir: "{app}\server"; Flags: ignoreversion
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\sharedfiles\categories_places365.txt"; DestDir: "{app}\sharedfiles"; Flags: ignoreversion
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\sharedfiles\face.pt"; DestDir: "{app}\sharedfiles"; Flags: ignoreversion
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\sharedfiles\facerec-high.model"; DestDir: "{app}\sharedfiles"; Flags: ignoreversion
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\sharedfiles\scene.model"; DestDir: "{app}\sharedfiles"; Flags: ignoreversion
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\sharedfiles\yolov5m.pt"; DestDir: "{app}\sharedfiles"; Flags: ignoreversion
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\windows_packages_gpu\*"; DestDir: "{app}\windows_packages"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\johnolafenwa\Documents\AI\DeepStack\logo.ico"; DestDir: "{app}"; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; IconFilename: {app}\{#MyAppIcon}; Tasks: desktopicon quicklaunchicon
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; IconFilename: {app}\{#MyAppIcon}; Tasks: quicklaunchicon

[Code]
procedure CurStepChanged(CurStep: TSetupStep);
begin
    if CurStep = ssPostInstall 
     then EnvAddPath(ExpandConstant('{app}') + '\server');
end;

procedure CurUninstallStepChanged(CurUninstallStep: TUninstallStep);
begin
    if CurUninstallStep = usPostUninstall
    then EnvRemovePath(ExpandConstant('{app}' + '\server'));
end;