/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CVNLP/CVNLP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CVNLPLexiconCursor : NSObject <NSCopying> {

	const LXCursorRef _cursor;
	unsigned long long _priority;

}

@property (nonatomic,readonly) const LXCursorRef cursor;                 //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)priority;
-(const LXCursorRef)cursor;
-(id)initByAdvancingCursor:(id)arg1 withString:(id)arg2 ;
-(id)initWithCursor:(LXCursorRef)arg1 priority:(unsigned long long)arg2 ;
-(id)newCursorByAdvancingWithString:(id)arg1 ;
-(double)cursorConditionalLogProbability;
@end

