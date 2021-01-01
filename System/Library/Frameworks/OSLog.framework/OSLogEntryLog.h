/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OSLog/OSLogEntry.h>
#import <OSLog/OSLogEntryFromProcess.h>
#import <OSLog/OSLogEntryWithPayload.h>

@class NSString, NSArray;

@interface OSLogEntryLog : OSLogEntry <OSLogEntryFromProcess, OSLogEntryWithPayload> {

	int _processIdentifier;
	unsigned long long _activityIdentifier;
	NSString* _process;
	NSString* _sender;
	unsigned long long _threadIdentifier;
	NSString* _category;
	NSArray* _components;
	NSString* _formatString;
	NSString* _subsystem;
	long long _level;

}

@property (nonatomic,readonly) long long level;                                    //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) unsigned long long activityIdentifier;              //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * process;                                 //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) int processIdentifier;                              //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sender;                                  //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) unsigned long long threadIdentifier;                //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * category;                                //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSArray * components;                               //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSString * formatString;                            //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,readonly) NSString * subsystem;                               //@synthesize subsystem=_subsystem - In the implementation block
-(NSString *)sender;
-(NSString *)category;
-(int)processIdentifier;
-(long long)level;
-(NSArray *)components;
-(NSString *)process;
-(NSString *)subsystem;
-(unsigned long long)threadIdentifier;
-(NSString *)formatString;
-(unsigned long long)activityIdentifier;
-(id)initWithEventProxy:(id)arg1 ;
@end

