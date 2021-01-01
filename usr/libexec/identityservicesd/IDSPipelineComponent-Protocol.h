//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDSPromise;
@protocol IDSPipelineComponent, IDSPipelineParameter;

@protocol IDSPipelineComponent
- (IDSPromise *)runWithInput:(id <IDSPipelineParameter>)arg1;
- (IDSPromise *)runIndividuallyWithInput:(id <IDSPipelineParameter>)arg1;
- (id <IDSPipelineComponent>)bindTo:(id <IDSPipelineComponent>)arg1;
@end
