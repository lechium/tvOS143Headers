/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSDeveloperSettings, VSOptional, VSDeveloperServiceConnection;

@interface VSDeveloperSettingsUpdateOperation : VSAsyncOperation {

	VSDeveloperSettings* _settings;
	VSOptional* _result;
	VSDeveloperServiceConnection* _connection;

}

@property (nonatomic,retain) VSOptional * result;                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSDeveloperServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) VSDeveloperSettings * settings;                           //@synthesize settings=_settings - In the implementation block
-(id)init;
-(VSOptional *)result;
-(VSDeveloperServiceConnection *)connection;
-(void)setConnection:(VSDeveloperServiceConnection *)arg1 ;
-(VSDeveloperSettings *)settings;
-(void)setSettings:(VSDeveloperSettings *)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
@end

