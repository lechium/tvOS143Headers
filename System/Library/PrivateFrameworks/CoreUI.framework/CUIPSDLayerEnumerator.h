/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@class CUIPSDLayerGroupRef;

@interface CUIPSDLayerEnumerator : NSEnumerator {

	CUIPSDLayerGroupRef* _layerGroup;
	unsigned _currentIndex;
	BOOL _isImageFile;

}
+(id)enumeratorWithPSDLayerGroup:(id)arg1 ;
+(id)enumeratorWithPSDImage:(id)arg1 ;
-(void)dealloc;
-(id)allObjects;
-(id)nextObject;
-(id)initWithPSDLayerGroup:(id)arg1 ;
-(id)initWithPSDImage:(id)arg1 ;
@end

