/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOSimpleTileRequesterOperationDelegate <NSObject>
@required
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1;
-(void)operationFinished:(id)arg1;
-(void)operationFailed:(id)arg1 error:(id)arg2;
-(id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;

@end

