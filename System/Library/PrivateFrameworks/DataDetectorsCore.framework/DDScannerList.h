/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

@interface DDScannerList : NSObject {

	BOOL _spotlightSuggestionsEnabled;
	int _type;
	NSString* _hash;
	NSMutableArray* _waitQueue;
	NSMutableArray* _scannerCache;
	NSMutableArray* _activeScanners;

}
-(id)initWithConfiguration:(id)arg1 ;
-(id)getCachedScanner;
-(void)activateScanner:(id)arg1 ;
-(BOOL)cancelJob:(long long)arg1 ;
-(id)scannerCreate;
-(void)pushBackScanner:(id)arg1 ;
-(void)enqueueJob:(/*^block*/id)arg1 withIdentifier:(long long)arg2 ;
-(id)dequeueJob;
-(unsigned long long)totalCount;
-(unsigned long long)busyCount;
@end

