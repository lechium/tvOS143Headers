/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class GEOTransitRouteUpdateResponse, NSString;

@interface GEOTransitRouteUpdateReplySimple : GEOXPCReply <GEOXPCReply> {

	GEOTransitRouteUpdateResponse* _response;

}

@property (nonatomic,retain) GEOTransitRouteUpdateResponse * response;              //@synthesize response=_response - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isValid;
-(void)setResponse:(GEOTransitRouteUpdateResponse *)arg1 ;
-(GEOTransitRouteUpdateResponse *)response;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
@end

