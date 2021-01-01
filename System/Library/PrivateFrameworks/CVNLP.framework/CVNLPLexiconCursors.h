/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CVNLP/CVNLP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CVNLPLexiconCursors : NSObject <NSCopying> {

	NSArray* _cursors;
	NSArray* __sortedCursors;

}

@property (nonatomic,retain) NSArray * _sortedCursors;              //@synthesize _sortedCursors=__sortedCursors - In the implementation block
@property (nonatomic,readonly) NSArray * cursors;                   //@synthesize cursors=_cursors - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(id)initWithCursors:(id)arg1 ;
-(void)enumerateLexiconCursorsSortedByPriorityWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)cursors;
-(NSArray *)_sortedCursors;
-(void)set_sortedCursors:(NSArray *)arg1 ;
@end

