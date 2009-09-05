/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableData, NSString, TTProfile, TTTabController;

@interface TTShell : NSObject
{
    TTTabController *_controller;
    TTProfile *_profile;
    id _target;
    SEL _action;
    int _fd;
    int _pid;
    int _shellPid;
    int _basePid;
    int _ttyDevice;
    char _ptyPath[12];
    int _exitStatus;
    BOOL _childTerminated;
    BOOL _pipeClosed;
    BOOL _wasDirty;
    BOOL _isUpdatingDirty;
    char *_shellArgs[255];
    NSMutableArray *_runningProcesses;
    NSString *_frontmostProcess;
    int _frontmostProcessPID;
    NSString *_shellCommand;
    BOOL _commandAsShell;
    int _shellExitAction;
    BOOL _useOptionAsMetaKey;
    BOOL _deleteSendsBackspace;
    NSMutableData *_writeBuffer;
}

+ (void)initialize;
+ (id)runningShells;
+ (void)signalPipeHandler:(id)arg1;
+ (void)childDidTerminate:(id)arg1;
+ (id)pathForExecutable:(id)arg1;
- (id)initWithAction:(SEL)arg1 target:(id)arg2 profile:(id)arg3 controller:(id)arg4 customShell:(id)arg5 commandAsShell:(BOOL)arg6;
- (id)description;
- (id)initShellArgs:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setShellExitActionOverride:(int)arg1;
- (void)dealloc;
- (int)pid;
- (int)fileDescriptor;
- (int)ttyDevice;
- (BOOL)isRunning;
- (void)detachTarget;
- (id)target;
- (SEL)action;
- (id)controller;
- (void)childTerminated:(int)arg1;
- (void)ioManagerDidEncounterError:(id)arg1;
- (void)processEnded;
- (void)terminate;
- (void)writeData:(id)arg1;
- (void)writeData:(id)arg1 escapingCharacters:(BOOL)arg2;
- (BOOL)isDirty;
- (id)updatedRunningProcesses;
- (id)runningProcesses;
- (id)frontmostProcess;
- (void)updateContentSize:(struct CGSize)arg1 rowCount:(unsigned int)arg2 columnCount:(unsigned int)arg3;
- (id)exitStatusMessage:(int)arg1;
- (id)ptyPathNSString;
- (int)shellExitAction;
- (id)shellCommand;
- (void)setShouldBufferWrites:(BOOL)arg1;
- (BOOL)isBufferingWrites;

@end
