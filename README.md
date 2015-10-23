# LxDBAnything
Print log without any format control symbol! Change debug habit thoroughly!

### Installation
You only need drag LxDBAnything.h to your project.

### Support
Minimum support iOS version: iOS 6.0

### Usage

#import "LxDBAnything.h"

- (void)viewDidLoad
{
    [super viewDidLoad];

    LxPrintAnyMark(Write here any as you want!);

    id obj = self.view;
    LxDBAnyVar(obj);

    CGPoint point = CGPointMake(12.34, 56.78);
    LxDBAnyVar(point);

    CGSize size = CGSizeMake(87.6, 5.43);
    LxDBAnyVar(size);

    CGRect rect = CGRectMake(2.3, 4.5, 5.6, 7.8);
    LxDBAnyVar(rect);

    NSRange range = NSMakeRange(3, 56);
    LxDBAnyVar(range);

    CGAffineTransform affineTransform = CGAffineTransformMake(1, 2, 3, 4, 5, 6);
    LxDBAnyVar(affineTransform);

    UIEdgeInsets edgeInsets = UIEdgeInsetsMake(3, 4, 5, 6);
    LxDBAnyVar(edgeInsets);

    SEL sel = @selector(viewDidLoad);
    LxDBAnyVar(sel);

    Class class = [UIBarButtonItem class];
    LxDBAnyVar(class);

    NSInteger i = 231;
    LxDBAnyVar(i);

    CGFloat f = M_E;
    LxDBAnyVar(f);

    BOOL b = YES;
    LxDBAnyVar(b);

    char c = 'S';
    LxDBAnyVar(c);

    ......
}

// Run your application and you'll see:

🎈-[ViewController viewDidLoad] L.22📍 Write here any as you want!
🎈-[ViewController viewDidLoad] L.25📍 obj = <UIView: 0x7ffd7ae1bcd0; frame = (0 0; 414 736); autoresize = W+H; layer = <CALayer: 0x7ffd7ae007a0>>
🎈-[ViewController viewDidLoad] L.28📍 point = NSPoint: {12.34, 56.780000000000001}
🎈-[ViewController viewDidLoad] L.31📍 size = NSSize: {87.599999999999994, 5.4299999999999997}
🎈-[ViewController viewDidLoad] L.34📍 rect = NSRect: {{2.2999999999999998, 4.5}, {5.5999999999999996, 7.7999999999999998}}
🎈-[ViewController viewDidLoad] L.37📍 range = NSRange: {3, 56}
🎈-[ViewController viewDidLoad] L.40📍 affineTransform = CGAffineTransform: {{1, 2, 3, 4}, {5, 6}}
🎈-[ViewController viewDidLoad] L.43📍 edgeInsets = UIEdgeInsets: {3, 4, 5, 6}
🎈-[ViewController viewDidLoad] L.46📍 sel = viewDidLoad
🎈-[ViewController viewDidLoad] L.49📍 class = UIBarButtonItem
🎈-[ViewController viewDidLoad] L.52📍 i = 231
🎈-[ViewController viewDidLoad] L.55📍 f = 2.718281828459045
🎈-[ViewController viewDidLoad] L.58📍 b = YES
🎈-[ViewController viewDidLoad] L.61📍 c = S

//  Different make log experience!

### License
LxDBAnything is available under the MIT License. See the LICENSE file for more info.