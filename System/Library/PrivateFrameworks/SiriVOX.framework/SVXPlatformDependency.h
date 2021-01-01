/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SVXServiceCommandHandling, SVXSessionActivityListening, SVXAudioPowerUpdateListening;
@interface SVXPlatformDependency : NSObject {

	long long _type;
	id<SVXServiceCommandHandling> _serviceCommandHandler;
	id<SVXSessionActivityListening> _activityListener;
	id<SVXAudioPowerUpdateListening> _audioPowerUpdateListener;

}

@property (nonatomic,readonly) long long type;                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id<SVXServiceCommandHandling> serviceCommandHandler;                    //@synthesize serviceCommandHandler=_serviceCommandHandler - In the implementation block
@property (nonatomic,readonly) id<SVXSessionActivityListening> activityListener;                       //@synthesize activityListener=_activityListener - In the implementation block
@property (nonatomic,readonly) id<SVXAudioPowerUpdateListening> audioPowerUpdateListener;              //@synthesize audioPowerUpdateListener=_audioPowerUpdateListener - In the implementation block
-(long long)type;
-(id<SVXServiceCommandHandling>)serviceCommandHandler;
-(id)initWithServiceCommandHandler:(id)arg1 ;
-(id)initWithSessionActivityListener:(id)arg1 ;
-(id)initWithAudioPowerUpdateListener:(id)arg1 ;
-(id<SVXSessionActivityListening>)activityListener;
-(id<SVXAudioPowerUpdateListening>)audioPowerUpdateListener;
@end
