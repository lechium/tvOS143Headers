/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGGeneratedLayoutDelegate.h>

@class NSArray, NSString;

@interface PXGPPTLayoutTester : NSObject <PXGGeneratedLayoutDelegate> {

	NSArray* _inputItems;

}

@property (nonatomic,retain) NSArray * inputItems;                  //@synthesize inputItems=_inputItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mockPaddingValues;
-(NSArray *)inputItems;
-(void)setInputItems:(NSArray *)arg1 ;
-(id)generatedLayout:(id)arg1 inputItemAtIndex:(unsigned)arg2 ;
-(CGRect)generatedLayout:(id)arg1 bestCropRectForInputItemAtIndex:(unsigned)arg2 withAspectRatio:(double)arg3 ;
-(id)generatedLayout:(id)arg1 objectReferenceAtIndex:(unsigned)arg2 ;
-(void)runGridLayoutTestWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runEditorialLayoutTestWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_iterateGridConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_iterateEditorialConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(/*^block*/id)arg3 ;
@end

