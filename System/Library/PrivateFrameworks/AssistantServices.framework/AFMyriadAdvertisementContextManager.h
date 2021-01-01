/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AFSettingsConnection, NSObject;

@interface AFMyriadAdvertisementContextManager : NSObject {

	AFSettingsConnection* _settingsConnection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)reset;
-(id)initWithQueue:(id)arg1 ;
-(id)_settingsConnection;
-(void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_resetSettingsConnection;
@end
