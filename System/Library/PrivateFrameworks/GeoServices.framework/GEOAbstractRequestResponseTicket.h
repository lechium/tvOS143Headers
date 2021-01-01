/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;

}
-(void)cancel;
-(SCD_Struct_GE86)dataRequestKind;
-(id)initWithTraits:(id)arg1 ;
-(void)performSubmitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(double)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(void)performSubmitWithHandler:(/*^block*/id)arg1 timeout:(double)arg2 networkActivity:(/*^block*/id)arg3 ;
@end
