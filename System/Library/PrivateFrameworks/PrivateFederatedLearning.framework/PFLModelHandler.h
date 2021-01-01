/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, MLModel, MLUpdateContext;

@interface PFLModelHandler : NSObject {

	NSURL* _modelURL;
	MLModel* _model;
	MLUpdateContext* _context;

}

@property (nonatomic,readonly) NSURL * modelURL;                     //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,readonly) MLModel * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) MLUpdateContext * context;              //@synthesize context=_context - In the implementation block
-(MLUpdateContext *)context;
-(void)setContext:(MLUpdateContext *)arg1 ;
-(MLModel *)model;
-(NSURL *)modelURL;
-(id)initWithModelURL:(id)arg1 error:(id*)arg2 ;
-(void)evaluateWithDataProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateOrderedLayerNames:(id)arg1 withDataProvider:(id)arg2 withPatchModelShapes:(id)arg3 withPatchModelData:(id)arg4 withModelConfiguration:(id)arg5 completion:(/*^block*/id)arg6 ;
@end
