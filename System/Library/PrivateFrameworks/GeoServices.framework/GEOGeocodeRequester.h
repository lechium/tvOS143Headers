/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOServiceRequester.h>

@interface GEOGeocodeRequester : GEOServiceRequester
+(id)sharedGeocodeRequester;
-(void)batchReverseGeocode:(id)arg1 auditToken:(id)arg2 success:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)cancelBatchReverseGeocode:(id)arg1 ;
@end

