/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSURL, GEOFlyoverRegionVersions, NSError, NSString;

@interface GEOAltitudeManifestVersionParser : NSObject <NSXMLParserDelegate> {

	GEOOnce_s _parsed;
	NSURL* _fileURL;
	GEOFlyoverRegionVersions* _versions;
	NSError* _parseError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(id)initWithFileURL:(id)arg1 ;
-(id)parse:(id*)arg1 ;
@end

