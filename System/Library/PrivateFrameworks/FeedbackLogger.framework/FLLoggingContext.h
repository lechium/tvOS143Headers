/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FeedbackLogger.framework/FeedbackLogger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FLLoggingContext.h>
@class NSString, NSFileManager, NSUserDefaults;


@protocol FLLoggingContext <FLTelemetryReporter>
@property (nonatomic,readonly) unsigned long long now; 
@property (nonatomic,copy,readonly) NSString * timestampReferenceIdentifier; 
@property (nonatomic,readonly) NSFileManager * fileManager; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) NSUserDefaults * userDefaults; 
@required
-(unsigned long long)now;
-(NSFileManager *)fileManager;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUserDefaults *)userDefaults;
-(NSString *)timestampReferenceIdentifier;

@end


@protocol OS_dispatch_queue;
@class NSString, NSFileManager, NSUserDefaults, NSObject;

@interface FLLoggingContext : NSObject <FLLoggingContext> {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _userDefaults;
	NSString* _timestampReferenceIdentifier;
	NSFileManager* _fileManager;

}

@property (nonatomic,copy) NSString * timestampReferenceIdentifier;              //@synthesize timestampReferenceIdentifier=_timestampReferenceIdentifier - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                        //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) unsigned long long now; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                    //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)now;
-(NSFileManager *)fileManager;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(id)initWithFileManager:(id)arg1 ;
-(NSUserDefaults *)userDefaults;
-(NSString *)timestampReferenceIdentifier;
-(void)setTimestampReferenceIdentifier:(NSString *)arg1 ;
-(void)report:(id)arg1 payload:(id)arg2 ;
@end

