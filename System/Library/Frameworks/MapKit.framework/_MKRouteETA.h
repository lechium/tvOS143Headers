/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _MKRouteETA : NSObject {

	int _status;
	double _distance;
	unsigned long long _transportType;
	double _travelTime;
	double _responseTime;

}

@property (assign,nonatomic) int status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double distance;                               //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double travelTime;                             //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) double responseTime;                         //@synthesize responseTime=_responseTime - In the implementation block
+(id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3 status:(int)arg4 ;
+(id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(unsigned long long)transportType;
-(void)setTransportType:(unsigned long long)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)setTravelTime:(double)arg1 ;
-(double)travelTime;
-(double)responseTime;
@end
