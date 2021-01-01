/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PBSStoreSettings : NSObject {

	id _domainObserver;
	BOOL _cachedShowSampleUberRow;
	BOOL _cachedShowSampleFlowcases;

}

@property (assign,nonatomic) BOOL showSampleUberRow; 
@property (assign,nonatomic) BOOL showSampleFlowcases; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_refreshPropertiesWithPreferences;
-(BOOL)showSampleUberRow;
-(void)setShowSampleUberRow:(BOOL)arg1 ;
-(BOOL)showSampleFlowcases;
-(void)setShowSampleFlowcases:(BOOL)arg1 ;
@end

