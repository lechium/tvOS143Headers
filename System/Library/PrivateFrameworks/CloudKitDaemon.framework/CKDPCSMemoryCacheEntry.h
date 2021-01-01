/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject {

	CKDPCSData* _pcsData;
	double _lastAccess;

}

@property (nonatomic,retain) CKDPCSData * pcsData;              //@synthesize pcsData=_pcsData - In the implementation block
@property (assign) double lastAccess;                           //@synthesize lastAccess=_lastAccess - In the implementation block
-(id)description;
-(id)init;
-(id)CKPropertiesDescription;
-(void)setLastAccess:(double)arg1 ;
-(double)lastAccess;
-(CKDPCSData *)pcsData;
-(void)setPcsData:(CKDPCSData *)arg1 ;
@end

