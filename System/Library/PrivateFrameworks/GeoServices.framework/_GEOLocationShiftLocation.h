/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOLatLng, GEOApplicationAuditToken, NSObject;

@interface _GEOLocationShiftLocation : NSObject {

	GEOLatLng* _latLng;
	GEOApplicationAuditToken* _auditToken;
	double _accuracy;
	/*^block*/id _completionHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _mustGoToNetworkCallback;
	/*^block*/id _functionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) GEOLatLng * latLng;                                 //@synthesize latLng=_latLng - In the implementation block
@property (nonatomic,readonly) double accuracy;                                    //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
-(GEOApplicationAuditToken *)auditToken;
-(GEOLatLng *)latLng;
-(void)performErrorHandler:(id)arg1 ;
-(double)accuracy;
-(void)performCompletionHandlerWithShiftedCoordinate:(GEOCoarseLocationLatLng)arg1 accuracy:(double)arg2 function:(id)arg3 ;
-(id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackQueue:(id)arg6 auditToken:(id)arg7 ;
-(id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(id)initWithLatLng:(id)arg1 auditToken:(id)arg2 functionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 callbackQueue:(id)arg5 ;
-(void)performMustGoToNetwork;
-(id)_initWithLatLng:(id)arg1 accuracy:(double)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 mustGoToNetworkCallback:(/*^block*/id)arg6 ;
-(void)_performOnCallbackQueue:(/*^block*/id)arg1 ;
@end

