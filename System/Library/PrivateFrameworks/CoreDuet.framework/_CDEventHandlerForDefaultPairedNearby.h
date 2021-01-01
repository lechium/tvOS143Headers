/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CDEventHandlerDelegate.h>

@class _CDDataCollectionAnonymizer, _CDFileUtility, NSString;

@interface _CDEventHandlerForDefaultPairedNearby : NSObject <_CDEventHandlerDelegate> {

	_CDDataCollectionAnonymizer* _anonymizer;
	_CDFileUtility* _utility;

}

@property (nonatomic,retain) _CDDataCollectionAnonymizer * anonymizer;              //@synthesize anonymizer=_anonymizer - In the implementation block
@property (nonatomic,retain) _CDFileUtility * utility;                              //@synthesize utility=_utility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(_CDFileUtility *)utility;
-(_CDDataCollectionAnonymizer *)anonymizer;
-(void)eventHandler:(id)arg1 withFileHandle:(id)arg2 ;
-(void)setAnonymizer:(_CDDataCollectionAnonymizer *)arg1 ;
-(void)setUtility:(_CDFileUtility *)arg1 ;
@end

