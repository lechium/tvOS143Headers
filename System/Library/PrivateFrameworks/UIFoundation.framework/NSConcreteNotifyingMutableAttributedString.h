/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSConcreteMutableAttributedString.h>

@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {

	id _delegate;

}
+(Class)_mutableStringClass;
-(void)beginEditing;
-(void)endEditing;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
@end

