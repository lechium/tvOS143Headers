/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WFTask.h>

@class WFLocation;

@interface WFChangeForecastRequest : WFTask {

	WFLocation* _location;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) WFLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(WFLocation *)location;
-(void)handleResponse:(id)arg1 ;
-(void)handleError:(id)arg1 forResponseIdentifier:(id)arg2 ;
-(void)startWithService:(id)arg1 ;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
