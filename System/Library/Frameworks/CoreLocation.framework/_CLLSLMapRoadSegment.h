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

@class NSArray;

@interface _CLLSLMapRoadSegment : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _roadID;
	NSArray* _polylines;

}

@property (assign,nonatomic) unsigned long long roadID;              //@synthesize roadID=_roadID - In the implementation block
@property (nonatomic,copy) NSArray * polylines;                      //@synthesize polylines=_polylines - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)roadID;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(NSArray *)polylines;
-(void)setRoadID:(unsigned long long)arg1 ;
-(void)setPolylines:(NSArray *)arg1 ;
@end

