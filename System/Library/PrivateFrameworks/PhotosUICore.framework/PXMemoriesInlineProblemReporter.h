/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHMemory, NSArray;

@interface PXMemoriesInlineProblemReporter : NSObject {

	PHMemory* _memory;
	NSArray* _features;

}

@property (nonatomic,retain) PHMemory * memory;               //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) NSArray * features;              //@synthesize features=_features - In the implementation block
-(PHMemory *)memory;
-(NSArray *)features;
-(void)setFeatures:(NSArray *)arg1 ;
-(void)setMemory:(PHMemory *)arg1 ;
-(id)_headerText;
-(id)initWithMemory:(id)arg1 features:(id)arg2 ;
-(id)feedbackMailViewController;
-(id)_reportStringForFeatures;
-(id)_infoText;
-(id)_disclaimerText;
@end

