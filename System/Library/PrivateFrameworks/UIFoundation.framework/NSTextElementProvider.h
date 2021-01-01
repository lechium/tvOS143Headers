/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSTextRange;


@protocol NSTextElementProvider <NSObject>
@property (readonly) NSTextRange * documentRange; 
@optional
-(id)adjustedRangeFromRange:(id)arg1 inEditingTextSelection:(BOOL)arg2;

@required
-(long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;
-(NSTextRange *)documentRange;
-(id)locationFromLocation:(id)arg1 offset:(long long)arg2;
-(id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3;
-(void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2;
-(BOOL)synchronizeToBackingStore:(/*^block*/id)arg1;

@end

