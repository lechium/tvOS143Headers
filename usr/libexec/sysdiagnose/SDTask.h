//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDUnit.h"

@class NSArray, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_semaphore, SDTaskDelegate;

__attribute__((visibility("hidden")))
@interface SDTask : SDUnit
{
    NSObject<OS_dispatch_semaphore> *_termination_sema;	// 8 = 0x8
    _Bool _started;	// 16 = 0x10
    _Bool _launched;	// 17 = 0x11
    _Bool _stopped;	// 18 = 0x12
    _Bool _invulnerable;	// 19 = 0x13
    _Bool _slowTimeout;	// 20 = 0x14
    _Bool _running;	// 21 = 0x15
    unsigned int _activeLimit;	// 24 = 0x18
    unsigned int _inactiveLimit;	// 28 = 0x1c
    unsigned int _targetUid;	// 32 = 0x20
    int _terminationStatus;	// 36 = 0x24
    int _processIdentifier;	// 40 = 0x28
    int _endStatus;	// 44 = 0x2c
    NSString *_launchPath;	// 48 = 0x30
    NSArray *_arguments;	// 56 = 0x38
    NSString *_stdoutPath;	// 64 = 0x40
    NSString *_stderrPath;	// 72 = 0x48
    NSString *_executionLine;	// 80 = 0x50
    NSString *_subDirectory;	// 88 = 0x58
    id <SDTaskDelegate> _taskDelegate;	// 96 = 0x60
    double _executionTime;	// 104 = 0x68
    NSMutableArray *_taskFileHandleArray;	// 112 = 0x70
    struct rusage _rusage_details;	// 120 = 0x78
}

+ (id)taskWithCommand:(id)arg1 arguments:(id)arg2 asUID:(unsigned int)arg3 outputFile:(id)arg4;	// IMP=0x0000000100036734
+ (id)taskWithCommand:(id)arg1 arguments:(id)arg2 inBootstrapDomainOfUID:(unsigned int)arg3 outputFile:(id)arg4;	// IMP=0x00000001000366b4
+ (id)shellTaskWithCommand:(id)arg1 outputFile:(id)arg2;	// IMP=0x00000001000365b0
+ (id)taskWithCommand:(id)arg1 arguments:(id)arg2 outputFile:(id)arg3 withRuntimeChecks:(unsigned long long)arg4;	// IMP=0x0000000100036510
+ (id)taskWithCommand:(id)arg1 arguments:(id)arg2 outputFile:(id)arg3;	// IMP=0x0000000100036488
+ (id)taskWithCommand:(id)arg1 arguments:(id)arg2 outputFile:(id)arg3 withSubDir:(id)arg4;	// IMP=0x00000001000363e8
+ (id)taskWithCommand:(id)arg1 arguments:(id)arg2 outputFile:(id)arg3 taskDelegate:(id)arg4;	// IMP=0x0000000100036348
+ (id)taskWithCommand:(id)arg1 arguments:(id)arg2 outputFile:(id)arg3 withSubDir:(id)arg4 taskDelegate:(id)arg5;	// IMP=0x0000000100036230
- (void).cxx_destruct;	// IMP=0x000000010003a7b0
@property(retain, nonatomic) NSMutableArray *taskFileHandleArray; // @synthesize taskFileHandleArray=_taskFileHandleArray;
@property(readonly) int endStatus; // @synthesize endStatus=_endStatus;
@property(readonly) double executionTime; // @synthesize executionTime=_executionTime;
@property(readonly) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly) int terminationStatus; // @synthesize terminationStatus=_terminationStatus;
@property(readonly, getter=isRunning) _Bool running; // @synthesize running=_running;
@property _Bool slowTimeout; // @synthesize slowTimeout=_slowTimeout;
@property _Bool invulnerable; // @synthesize invulnerable=_invulnerable;
@property _Bool stopped; // @synthesize stopped=_stopped;
@property _Bool launched; // @synthesize launched=_launched;
@property _Bool started; // @synthesize started=_started;
@property unsigned int targetUid; // @synthesize targetUid=_targetUid;
@property unsigned int inactiveLimit; // @synthesize inactiveLimit=_inactiveLimit;
@property unsigned int activeLimit; // @synthesize activeLimit=_activeLimit;
@property(nonatomic) struct rusage rusage_details; // @synthesize rusage_details=_rusage_details;
@property(nonatomic) __weak id <SDTaskDelegate> taskDelegate; // @synthesize taskDelegate=_taskDelegate;
@property(retain) NSString *subDirectory; // @synthesize subDirectory=_subDirectory;
@property(retain) NSString *executionLine; // @synthesize executionLine=_executionLine;
@property(retain) NSString *stderrPath; // @synthesize stderrPath=_stderrPath;
@property(retain) NSString *stdoutPath; // @synthesize stdoutPath=_stdoutPath;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSString *launchPath; // @synthesize launchPath=_launchPath;
- (int)signalRunningTask:(int)arg1;	// IMP=0x000000010003a4c0
- (_Bool)resume;	// IMP=0x000000010003a498
- (_Bool)suspend;	// IMP=0x000000010003a470
- (void)interrupt;	// IMP=0x000000010003a460
- (void)terminate;	// IMP=0x000000010003a450
- (int)_launch;	// IMP=0x0000000100039aac
- (void)_waitForExitInformation;	// IMP=0x00000001000395f4
- (void)_stop;	// IMP=0x00000001000388ec
- (int)_start;	// IMP=0x000000010003706c
- (id)fileHandleForError;	// IMP=0x0000000100036dcc
- (id)fileHandleForOutput;	// IMP=0x00000001000367cc
- (id)description;	// IMP=0x000000010003618c
- (id)init;	// IMP=0x0000000100035f44
- (void *)SDTaskPOSIXSpawnAttributes;	// IMP=0x0000000100035be8

@end

