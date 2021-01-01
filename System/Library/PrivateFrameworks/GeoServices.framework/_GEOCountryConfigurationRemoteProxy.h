/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GEOCountryConfigurationServerProxy.h>

@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate;
@class NSObject, NSString;

@interface _GEOCountryConfigurationRemoteProxy : NSObject <_GEOCountryConfigurationServerProxy> {

	NSObject*<OS_dispatch_queue> _queue;
	id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	int _providersChangedToken;
	id _countryCodeChangeListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
@end
