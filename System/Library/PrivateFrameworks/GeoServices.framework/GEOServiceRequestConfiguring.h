/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOServiceRequestConfiguring <NSObject>
@optional
-(unsigned long long)multipathServiceType;
-(double)timeout;
-(id)additionalStatesForNetworkEvent;

@required
-(unsigned long long)urlType;
-(SCD_Struct_GE4*)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)debugRequestName;
-(id)serviceTypeNumber;

@end

