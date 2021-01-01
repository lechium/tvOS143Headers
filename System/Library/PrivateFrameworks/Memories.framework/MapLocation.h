/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface MapLocation : NSObject <NSCoding, NSCopying> {

	BOOL _resolving;
	BOOL _resolved;
	int _state;
	NSString* _customName;
	double _latitude;
	double _longitude;
	NSString* _name;
	NSString* _countryName;
	NSMutableArray* _completionHandlers;

}

@property (assign,nonatomic) int state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * countryName;                           //@synthesize countryName=_countryName - In the implementation block
@property (assign,nonatomic) double latitude;                                  //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                 //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,getter=isResolving,nonatomic) BOOL resolving;                //@synthesize resolving=_resolving - In the implementation block
@property (assign,getter=isResolved,nonatomic) BOOL resolved;                  //@synthesize resolved=_resolved - In the implementation block
@property (nonatomic,retain) NSString * customName;                            //@synthesize customName=_customName - In the implementation block
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
+(id)mapLocationWithLatitude:(double)arg1 longitude:(double)arg2 ;
+(id)mapLocationWithMapItem:(id)arg1 ;
+(id)mapLocationWithLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
+(id)defaultLocation;
+(id)mapLocationWithLocation:(id)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setResolved:(BOOL)arg1 ;
-(BOOL)isResolved;
-(id)stringRepresentation;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(void)_resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(id)plistRepresentation;
-(void)setResolving:(BOOL)arg1 ;
-(void)setCustomName:(NSString *)arg1 ;
-(BOOL)hasSameCoordinateAsLocation:(id)arg1 tolerance:(float)arg2 ;
-(NSString *)customName;
-(BOOL)isResolving;
-(BOOL)hasValidCoordinate;
@end

