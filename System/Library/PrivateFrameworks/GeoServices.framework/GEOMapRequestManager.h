/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, geo_isolater;

@interface GEOMapRequestManager : NSObject {

	NSMutableSet* _requests;
	geo_isolater* _isolater;

}
-(id)init;
-(void)dealloc;
-(void)trackRequest:(id)arg1 ;
-(void)requestComplete:(id)arg1 ;
@end

