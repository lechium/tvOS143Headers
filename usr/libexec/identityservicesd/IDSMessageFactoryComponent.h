//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDSPipelineComponent.h"

@class IDSMMCSUploader;

@interface IDSMessageFactoryComponent : IDSPipelineComponent
{
    IDSMMCSUploader *_mmcsUploader;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001ac910
- (_Bool)shouldSendAsAttachment:(id)arg1 maxSize:(unsigned long long)arg2;	// IMP=0x00000001001ac860
- (id)runIndividuallyWithInput:(id)arg1;	// IMP=0x00000001001aaf24
- (id)initWithMMCSUploader:(id)arg1;	// IMP=0x00000001001aae30

@end

