/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MNLocation, NSArray, GEODirectionsRequest, GEODirectionsResponse, NSError;

@interface MNTraceRecordingData : NSObject <NSSecureCoding> {

	MNLocation* _initialUserLocation;
	NSArray* _waypoints;
	GEODirectionsRequest* _initialDirectionsRequest;
	GEODirectionsResponse* _initialDirectionsResponse;
	NSError* _initialDirectionsRequestError;
	double _initialDirectionsRequestTimestamp;
	double _initialDirectionsResponseTimestamp;

}

@property (nonatomic,retain) MNLocation * initialUserLocation;                               //@synthesize initialUserLocation=_initialUserLocation - In the implementation block
@property (nonatomic,retain) NSArray * waypoints;                                            //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,retain) GEODirectionsRequest * initialDirectionsRequest;                //@synthesize initialDirectionsRequest=_initialDirectionsRequest - In the implementation block
@property (nonatomic,retain) GEODirectionsResponse * initialDirectionsResponse;              //@synthesize initialDirectionsResponse=_initialDirectionsResponse - In the implementation block
@property (nonatomic,retain) NSError * initialDirectionsRequestError;                        //@synthesize initialDirectionsRequestError=_initialDirectionsRequestError - In the implementation block
@property (assign,nonatomic) double initialDirectionsRequestTimestamp;                       //@synthesize initialDirectionsRequestTimestamp=_initialDirectionsRequestTimestamp - In the implementation block
@property (assign,nonatomic) double initialDirectionsResponseTimestamp;                      //@synthesize initialDirectionsResponseTimestamp=_initialDirectionsResponseTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)waypoints;
-(void)setWaypoints:(NSArray *)arg1 ;
-(MNLocation *)initialUserLocation;
-(GEODirectionsRequest *)initialDirectionsRequest;
-(GEODirectionsResponse *)initialDirectionsResponse;
-(NSError *)initialDirectionsRequestError;
-(double)initialDirectionsRequestTimestamp;
-(double)initialDirectionsResponseTimestamp;
-(void)setInitialDirectionsRequest:(GEODirectionsRequest *)arg1 ;
-(void)setInitialDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(void)setInitialDirectionsRequestError:(NSError *)arg1 ;
-(void)setInitialDirectionsRequestTimestamp:(double)arg1 ;
-(void)setInitialDirectionsResponseTimestamp:(double)arg1 ;
-(void)setInitialUserLocation:(MNLocation *)arg1 ;
@end

