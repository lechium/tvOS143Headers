/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class GEOFlyoverRegionVersions;

@interface _GEOFlyoverRegionVersionMap : NSObject {

	GEOFlyoverRegionVersions* _versions;
	unordered_map<unsigned int, unsigned long, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > >* _regionToIndex;

}
-(id)init;
-(id)initWithData:(id)arg1 ;
-(GEOFlyoverRegion*)regionForID:(unsigned)arg1 ;
-(void)enumerateFlyoverRegions:(/*^block*/id)arg1 ;
-(id)initWithFlyoverRegions:(id)arg1 ;
@end
