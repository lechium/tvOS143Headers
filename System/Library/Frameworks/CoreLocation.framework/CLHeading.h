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

@class NSDate;

@interface CLHeading : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double magneticHeading; 
@property (nonatomic,readonly) double trueHeading; 
@property (nonatomic,readonly) double headingAccuracy; 
@property (nonatomic,readonly) double x; 
@property (nonatomic,readonly) double y; 
@property (nonatomic,readonly) double z; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(id)shortDescription;
-(double)x;
-(double)y;
-(double)headingAccuracy;
-(double)z;
-(id)initWithClientHeading:(SCD_Struct_CL6)arg1 ;
-(double)magneticHeading;
-(double)trueHeading;
@end

