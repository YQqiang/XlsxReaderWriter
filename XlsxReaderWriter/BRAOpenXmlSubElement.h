//
//  BRAOpenXmlSubElement.h
//  BRAXlsxReaderWriter
//
//  Created by René BIGOT on 22/10/2014.
//  Copyright (c) 2014 René Bigot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NativeColor+HTML.h"
#import "NativeFont+BoldItalic.h"
#import "XMLDictionary/XMLDictionary.h"
#import "NSDictionary+DeepCopy.h"
#import "NSDictionary+OpenXmlString.h"
#import "NSDictionary+OpenXMLDictionaryParser.h"

@class BRAStyles, BRAWorksheet;

@interface BRAOpenXmlSubElement : NSObject

- (instancetype)initWithOpenXmlAttributes:(NSDictionary *)attributes;
- (void)loadAttributes;

@property (nonatomic, strong) NSDictionary *dictionaryRepresentation;

@end


@interface BRAOpenXmlSubElementWithStyle : BRAOpenXmlSubElement {
    BRAStyles *_styles;
}

- (instancetype)initWithOpenXmlAttributes:(NSDictionary *)attributes inStyles:(BRAStyles *)styles;

@end

@interface BRAOpenXmlSubElementWithWorksheet : BRAOpenXmlSubElement {
    BRAWorksheet *_worksheet;
}

- (instancetype)initWithOpenXmlAttributes:(NSDictionary *)attributes inWorksheet:(BRAWorksheet *)worksheet;

@end
