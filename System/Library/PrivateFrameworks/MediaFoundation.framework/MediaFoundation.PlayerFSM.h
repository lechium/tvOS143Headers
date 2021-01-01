/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFStateDumpable.h>
#import <libobjc.A.dylib/MFResettable.h>

@class NSDictionary;

@interface MediaFoundation.PlayerFSM : _UKNOWN_SUPERCLASS_ <MFStateDumpable, MFResettable> {

	 delegate;
	 states;
	 controller;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(void)reset;
-(NSDictionary *)stateDictionary;
@end

