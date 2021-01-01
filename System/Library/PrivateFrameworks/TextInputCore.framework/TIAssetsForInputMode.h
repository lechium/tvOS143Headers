/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputMode : NSObject {

	NSMutableDictionary* _assetsByInputModeLevel;
	NSString* _inputMode;

}

@property (nonatomic,readonly) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(void)dealloc;
-(id)recursiveDescription;
-(NSString *)inputMode;
-(id)initWithInputMode:(id)arg1 ;
-(id)assetContentItemsMatching:(id)arg1 ;
-(void)addAssetsForInputModeLevel:(id)arg1 ;
-(void)removeAllInputModeLevels;
@end
