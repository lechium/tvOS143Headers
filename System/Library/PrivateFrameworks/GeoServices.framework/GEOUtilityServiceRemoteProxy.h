/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOUtilityServiceProxy.h>

@class NSString;

@interface GEOUtilityServiceRemoteProxy : NSObject <GEOUtilityServiceProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getHomeDirectoryPath;
-(id)getGeoServicesCacheDirectoryPath;
-(void)getCurrentGeoServicesState:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)_getPathSynchronous:(const char*)arg1 ;
@end

