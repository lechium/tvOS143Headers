/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/TBRemoteFetchResponse.h>

@class GEOWiFiQualityNetworkSearchResult;

@interface TBNetworkRemoteFetchResponse : TBRemoteFetchResponse {

	GEOWiFiQualityNetworkSearchResult* _networkSearchResult;

}

@property (nonatomic,retain) GEOWiFiQualityNetworkSearchResult * networkSearchResult;              //@synthesize networkSearchResult=_networkSearchResult - In the implementation block
+(id)responseWithNetworkSearchResults:(id)arg1 ;
-(id)initWithNetworkSearchResults:(id)arg1 ;
-(GEOWiFiQualityNetworkSearchResult *)networkSearchResult;
-(void)setNetworkSearchResult:(GEOWiFiQualityNetworkSearchResult *)arg1 ;
@end

