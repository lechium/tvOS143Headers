/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WFTask.h>

@interface WFReachabilityConfigurationRequest : WFTask {

	/*^block*/id _resultHandler;

}

@property (nonatomic,copy) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)cleanup;
-(BOOL)requiresResponse;
-(void)handleResponse:(id)arg1 ;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(void)handleError:(id)arg1 forResponseIdentifier:(id)arg2 ;
-(void)startWithService:(id)arg1 ;
-(id)initWithResultHandler:(/*^block*/id)arg1 ;
-(void)handleCancellation;
@end

