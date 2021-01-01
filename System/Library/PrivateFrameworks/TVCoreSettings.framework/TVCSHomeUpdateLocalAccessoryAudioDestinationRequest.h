/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMMediaDestination;
@interface TVCSHomeUpdateLocalAccessoryAudioDestinationRequest : NSObject {

	BOOL _forceUpdateWithUnavailableDestination;
	id<HMMediaDestination> _audioDestination;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) id<HMMediaDestination> audioDestination;                 //@synthesize audioDestination=_audioDestination - In the implementation block
@property (assign,nonatomic) BOOL forceUpdateWithUnavailableDestination;              //@synthesize forceUpdateWithUnavailableDestination=_forceUpdateWithUnavailableDestination - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id<HMMediaDestination>)audioDestination;
-(void)setAudioDestination:(id<HMMediaDestination>)arg1 ;
-(BOOL)forceUpdateWithUnavailableDestination;
-(void)setForceUpdateWithUnavailableDestination:(BOOL)arg1 ;
@end
