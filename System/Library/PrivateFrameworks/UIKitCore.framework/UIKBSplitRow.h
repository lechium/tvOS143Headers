/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSDictionary, UIKBTree;

@interface UIKBSplitRow : NSObject {

	unsigned char _rowIndex;
	double _rowOffset;
	double _rowWidth;
	CGSize _defaultKeySize;
	NSMutableArray* _keys;
	NSMutableArray* _vacancies;
	NSDictionary* _hints;
	UIKBTree* _keylistLeft;
	UIKBTree* _geolistLeft;
	UIKBTree* _attrlistLeft;
	UIKBTree* _keylistRight;
	UIKBTree* _geolistRight;
	UIKBTree* _attrlistRight;

}

@property (assign,nonatomic) unsigned char rowIndex;              //@synthesize rowIndex=_rowIndex - In the implementation block
@property (assign) double rowOffset;                              //@synthesize rowOffset=_rowOffset - In the implementation block
@property (assign) double rowWidth;                               //@synthesize rowWidth=_rowWidth - In the implementation block
@property (assign) CGSize defaultKeySize;                         //@synthesize defaultKeySize=_defaultKeySize - In the implementation block
@property (readonly) NSMutableArray * keys;                       //@synthesize keys=_keys - In the implementation block
@property (retain) NSDictionary * hints;                          //@synthesize hints=_hints - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(id)keyAtIndex:(int)arg1 ;
-(NSMutableArray *)keys;
-(void)addKey:(id)arg1 ;
-(unsigned char)rowIndex;
-(NSDictionary *)hints;
-(void)setHints:(NSDictionary *)arg1 ;
-(CGSize)defaultKeySize;
-(void)setRowIndex:(unsigned char)arg1 ;
-(id)listOfType:(int)arg1 left:(BOOL)arg2 ;
-(double)rowOffset;
-(void)setRowOffset:(double)arg1 ;
-(double)rowWidth;
-(void)setRowWidth:(double)arg1 ;
-(void)setDefaultKeySize:(CGSize)arg1 ;
@end

