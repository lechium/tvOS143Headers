/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TRIDownloadNotificationProtocol.h>

@class NSError, NSString;

@interface TRIDownloadNotification : NSObject <TRIDownloadNotificationProtocol> {

	unsigned long long _type;
	unsigned long long _progress;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long progress;                      //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) unsigned long long progressMaxValue; 
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dispatchQueue;
+(id)_descriptionForErrorCode:(unsigned long long)arg1 ;
+(id)notificationNameForKey:(id)arg1 ;
+(id)_notificationWithState:(unsigned long long)arg1 ;
+(BOOL)_notifyDownloadUpdateForKey:(id)arg1 withState:(unsigned long long)arg2 ;
+(id)registerDownloadNotificationForKey:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)deregisterNotificationWithToken:(id)arg1 ;
+(BOOL)notifyDownloadProgressForKey:(id)arg1 withProgress:(unsigned long long)arg2 ;
+(BOOL)notifyDownloadCompletedForKey:(id)arg1 ;
+(BOOL)notifyDownloadFailedForKey:(id)arg1 withError:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(NSError *)error;
-(unsigned long long)progress;
-(id)initWithType:(unsigned long long)arg1 progress:(unsigned long long)arg2 error:(id)arg3 ;
-(unsigned long long)progressMaxValue;
@end

