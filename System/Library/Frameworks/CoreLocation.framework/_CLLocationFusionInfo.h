/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CLLocationFusionInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _coordinateFused;
	int _referenceFrame;
	double _horizontalAccuracy;
	double _course;
	double _courseAccuracy;
	SCD_Struct_CL2 _coordinate;

}

@property (getter=isCoordinateFused,nonatomic,readonly) BOOL coordinateFused;              //@synthesize coordinateFused=_coordinateFused - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CL2 coordinate;                                  //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                                  //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) int referenceFrame;                                         //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (nonatomic,readonly) double course;                                              //@synthesize course=_course - In the implementation block
@property (nonatomic,readonly) double courseAccuracy;                                      //@synthesize courseAccuracy=_courseAccuracy - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CL2)coordinate;
-(int)referenceFrame;
-(double)horizontalAccuracy;
-(double)course;
-(double)courseAccuracy;
-(id)initWithCoordinateFused:(BOOL)arg1 coordinate:(SCD_Struct_CL2)arg2 horizontalAccuracy:(double)arg3 referenceFrame:(int)arg4 course:(double)arg5 courseAccuracy:(double)arg6 ;
-(BOOL)isCoordinateFused;
@end
