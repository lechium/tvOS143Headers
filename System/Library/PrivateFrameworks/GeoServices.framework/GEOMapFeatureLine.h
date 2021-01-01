/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureLine : NSObject {

	GEOCoarseLocationLatLng* _coordinates;
	unsigned long long _coordinateCount;
	double _length;
	BOOL _isFlipped;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) double length; 
-(id)init;
-(void)dealloc;
-(double)length;
-(GEOCoarseLocationLatLng*)coordinates;
-(id)_containingTile;
-(SCD_Struct_GE34*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(unsigned long long)coordinateCount;
@end

