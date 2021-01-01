/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding> {

	NSMutableArray* _directions;
	BOOL _good;
	BOOL _hov;
	BOOL _preferred;

}

@property (nonatomic,readonly) BOOL hasDirections; 
@property (nonatomic,readonly) NSArray * directions; 
@property (nonatomic,readonly) BOOL isLaneForManeuver; 
@property (nonatomic,readonly) BOOL isHOVLane; 
@property (nonatomic,readonly) BOOL isPreferredLaneForManeuver; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)directions;
-(BOOL)isLaneForManeuver;
-(BOOL)isHOVLane;
-(BOOL)isPreferredLaneForManeuver;
-(id)initWithLaneInfo:(id)arg1 ;
-(BOOL)hasDirections;
@end

