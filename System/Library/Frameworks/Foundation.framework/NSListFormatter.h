/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale, NSFormatter;

@interface NSListFormatter : NSFormatter {

	CFListFormatterRef _listFormatter;
	NSLocale* _locale;
	NSFormatter* _itemFormatter;

}

@property (copy) NSLocale * locale;                        //@synthesize locale=_locale - In the implementation block
@property (copy) NSFormatter * itemFormatter;              //@synthesize itemFormatter=_itemFormatter - In the implementation block
+(id)localizedStringByJoiningStrings:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(id)_stringFromStringArray:(id)arg1 ;
-(CFListFormatterRef)_listFormatter;
-(id)stringFromItems:(id)arg1 ;
-(NSFormatter *)itemFormatter;
-(void)setItemFormatter:(NSFormatter *)arg1 ;
@end
