/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CUINamedLookup.h>

@class NSMutableDictionary;

@interface CUINamedRecognitionGroup : CUINamedLookup {

	NSMutableDictionary* _imageContents;
	NSMutableDictionary* _objectContents;

}
-(void)dealloc;
-(id)recognitionImageWithName:(id)arg1 ;
-(id)recognitionObjectWithName:(id)arg1 ;
-(id)initWithName:(id)arg1 contentsFromCatalog:(id)arg2 usingRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4 ;
-(id)namedRecognitionItemList;
-(id)namedRecognitionImageImageList;
-(id)namedRecognitionObjectObjectList;
-(id)recognitionItemsWithName:(id)arg1 ;
@end

