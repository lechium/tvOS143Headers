/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXGMutableLayoutGuide.h>

@class PXGLayout;

@interface PXGLayoutGuide : PXObservable <PXGMutableLayoutGuide> {

	PXGLayout* _referenceLayout;
	CGRect _referenceRect;

}

@property (assign,nonatomic) CGRect referenceRect;                            //@synthesize referenceRect=_referenceRect - In the implementation block
@property (assign,nonatomic,__weak) PXGLayout * referenceLayout;              //@synthesize referenceLayout=_referenceLayout - In the implementation block
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setRect:(CGRect)arg1 inLayout:(id)arg2 ;
-(CGRect)rectInLayout:(id)arg1 ;
-(CGRect)referenceRect;
-(void)setReferenceRect:(CGRect)arg1 ;
-(PXGLayout *)referenceLayout;
-(void)setReferenceLayout:(PXGLayout *)arg1 ;
@end

